using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class background_Controller : MonoBehaviour {

    // PRIVATE INSTANCE VARIABLES +++++++++++++++++++++++
    private int _speed;
    private Transform _transform;
    private AudioSource _source;

    // PUBLIC PROPERTIES+++++++++++++++++++++++++++++++++
    public int Speed
    {
        get
        {
            return this._speed;
        }
        set
        {
            this._speed = value;
        }
    }
    public Game_Controller controller;
    public AudioClip traffic_noise;

    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();
        this._speed = 2;
        controller = GameObject.FindWithTag("GameController").GetComponent<Game_Controller>();
        this._source = this.GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        this._move();
        this._checkBounds();
    }

    /**
     * this method moves the game object down the screen by _speed px every frame
     */
    private void _move()
    {
        Vector2 newPosition = this._transform.position;

        newPosition.x -= this._speed;

        this._transform.position = newPosition;

        if (!controller.IsGameOver)
        {
            controller.IncreaseScore(1);
        }
    }

    /**
     * this method checks to see if the game object meets the top-boarder of the screen
     */
    private void _checkBounds()
    {
        if (this._transform.position.x <= -208f)
        {
            this._reset();
        }
    }

    /**
     * this method resets the game object to the original position
     */
    private void _reset()
    {
        this._transform.position = new Vector2(1510f, 0f);
    }
}
