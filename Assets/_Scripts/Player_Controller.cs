using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Player_Controller : MonoBehaviour {
    // PRIVATE INSTANCE VARIABLES
    private Transform _transform;
    private AudioSource _source;

    // PUBLIC VARIABLES
    public Game_Controller controller;
    public AudioClip Hit_Sound;
    public AudioClip Caught_Ball_Sound;
    public AudioClip Dog_Bark;

    // Use this for initialization
    void Start () {
        this._transform = this.GetComponent<Transform>();
        this._source = this.GetComponent<AudioSource>();
        Cursor.visible = false;
    }
	
	// Update is called once per frame
	void Update () {
        this._move();
	}
    // Will move the player up and down on game
    private void _move()
    {
        this._transform.position = new Vector2(405f, Mathf.Clamp(Input.mousePosition.y - 300f,-210f,118.6f));
    }
    //detects if hit by car
    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.CompareTag("Car") || other.gameObject.CompareTag("Drunk_Driver"))
        {
            _source.PlayOneShot(Hit_Sound);
            controller.DecreaseLives();
        }
        if(other.gameObject.CompareTag("Ball"))
        {
            _source.PlayOneShot(Caught_Ball_Sound);
            controller.IncreaseLives();
        }
        _source.PlayOneShot(Dog_Bark);
    }
}
