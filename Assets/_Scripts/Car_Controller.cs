using UnityEngine;
using System.Collections;

public class Car_Controller : MonoBehaviour
{
    // PRIVATE INSTANCE VARIABLES +++++++++++++++++++++++
    private Transform _transform;

    // PUBLIC PROPERTIES+++++++++++++++++++++++++++++++++
    public int Speed = 5;

    // Use this for initialization
    void Start()
    {
        this._transform = this.GetComponent<Transform>();
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
            this._reset();
        }
    }

    /**
     * this method resets the game object to the original position
     */
    private void _reset()
    {
        this._transform.position = new Vector2(1040f, Random.Range(-204f,118.6f));
    }
}
