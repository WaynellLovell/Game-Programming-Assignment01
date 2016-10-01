using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Drunk_Car_Controller : MonoBehaviour
{

    // PRIVATE INSTANCE VARIABLES +++++++++++++++++++++++++++++
    private int _speed;
    private int _drift;
    private string _driftPosition;
    private Transform _transform;


    // PUBLIC PROPERTIES
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

    public int Drift
    {
        get
        {
            return this._drift;
        }
        set
        {
            this._drift = value;
        }
    }
    public string DriftPosition
    {
        get
        {
            return this._driftPosition;
        }
        set
        {
            this._driftPosition = value;
        }
    }
    // PUBLIC VARIABLES
    public Game_Controller controller;


    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();
        this.Speed = Random.Range(5, 10);
        this.Drift = 2;
        controller = GameObject.FindWithTag("GameController").GetComponent<Game_Controller>();
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

        newPosition.x -= this.Speed;
        _checkBounce();
        if (DriftPosition == "Up")
        {
            newPosition.y += this.Drift;
        }
        else
        {
            newPosition.y -= this.Drift;
        }

        this._transform.position = newPosition;
    }
    /**
     * this method decides which position to drift
     */
    private void _checkBounce()
    {
        if (this._transform.position.y <= -213f)
        {
            DriftPosition = "Up";
        }
        else if (this._transform.position.y >= 117.8f)
        {
            DriftPosition = "Down";
        }
    }

    /**
	 * this method checks to see if the game object meets the top-border of the screen
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
        if (!controller.IsGameOver)
        {
            controller.SpawnCars();
        }
        DestroyObject(gameObject);
    }
    /**
     * this method makes crash noises when drunk cards hit another car
     */
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Car")||other.gameObject.CompareTag("Drunk_Driver"))
        {
            controller.DrunkCarHit();
            DriftPosition = "Up";
        }
    }
}