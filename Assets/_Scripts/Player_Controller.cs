using UnityEngine;
using System.Collections;

public class Player_Controller : MonoBehaviour {
    // PRIVATE INSTANCE VARIABLES
    private Transform _transform;

	// Use this for initialization
	void Start () {
        this._transform = this.GetComponent<Transform>();
	
	}
	
	// Update is called once per frame
	void Update () {
        this._move();
	}
    // Will move the player up and down on game
    private void _move()
    {
        this._transform.position = new Vector2(-243f, Mathf.Clamp(Input.mousePosition.y - 47.3f,-210f,118.6f));
    }
    //detects if hit by car
    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.CompareTag("Car"))
        {
            Debug.Log("Ran Over");
        }

    }
}
