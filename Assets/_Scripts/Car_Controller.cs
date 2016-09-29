using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Car_Controller : MonoBehaviour
{
    // PRIVATE INSTANCE VARIABLES +++++++++++++++++++++++
    private Transform _transform;

    // PUBLIC PROPERTIES+++++++++++++++++++++++++++++++++
    public int Speed = 5;
    public Game_Controller controller;

    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();
        controller = GameObject.FindWithTag("GameController").GetComponent <Game_Controller> ();

    }

    // Update is called once per frame
    void Update()
    {
        Move();
        this._checkBounds();
    }

    /**
     * this method moves the game object down the screen by _speed px every frame
     */
    void Move()
    {
        Vector2 newPosition = this._transform.position;

        newPosition.x -= Speed;

        this._transform.position = newPosition;
    }

    /**
     * this method checks to see if the game object meets the top-boarder of the screen
     */
    private void _checkBounds()
    {
        if (this._transform.position.x <= 256f)
        {
            this._destroy();
        }
    }

    /**
     * this method resets the game object to the original position
     */
    private void _destroy()
    {
        controller.SpawnCars();
        DestroyObject(gameObject);
    }
}
