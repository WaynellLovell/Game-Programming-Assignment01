using UnityEngine;
using System.Collections;

public class Drunk_Car_Controller : MonoBehaviour {

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


    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();

        this._reset();
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
        else if(this._transform.position.y >= 117.8f)
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
            this._reset();
        }
    }

    /**
	 * this method resets the game object to the original position
	 */
    private void _reset()
    {
        this.Speed = Random.Range(5, 10);
        this.Drift = 2;
        this._transform.position = new Vector2(1039f,Random.Range(-214.7f, 118.7f));
    }
}
