using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Game_Controller : MonoBehaviour {

    [Header("User Interface")]
    // The Actual GUI text objects
    public Text scoreText;
    public Text livesText;
    public Text GameOverText;
    public Button StartButton;
    public Button RestartButton;

    [Header("Objects")]
    public GameObject Car01;
    public GameObject Car02;
    public GameObject Car03;
    public GameObject Car04;
    public GameObject Ball;
    private AudioSource _source;

    // The values we'll be printing
    private int score = 0;
    private int livesNumber = 10;
    private int plus1000 = 1000;
    private int NumberOfCars = 1;

    //other public stuff
    public bool IsGameOver;
    public AudioClip Hit_Car;
    public AudioClip GameOver_sound;

    void Start ()
    {
        this._source = this.GetComponent<AudioSource>();
        IsGameOver = true;
        RestartButton.gameObject.SetActive(false);
    }
    public void StartGame()
    {
        GameOverText.text = "";
        IsGameOver = false;
        StartButton.gameObject.SetActive(false);
        SpawnCars();
    }
    //
    //Spawns a car object to the scene
    public void SpawnCars ()
    {
            switch (Random.Range(1, 5))
            {
                case 1:
                    {
                        Instantiate(Car01);
                        break;
                    }
                case 2:
                    {
                        Instantiate(Car02);
                        break;
                    }
                case 3:
                    {
                        Instantiate(Car03);
                        break;
                    }
                case 4:
                    {
                        Instantiate(Car04);
                        break;
                    }
            }
    }
    //Increase the ui score and spawns another car
    public void IncreaseScore(int increase)
    {
        score += increase;
        scoreText.text = "Score: " + score;
        if(score == plus1000)
        {
            plus1000 += 1000;
            Instantiate(Ball);
            if (NumberOfCars < 4)
            {
                SpawnCars();
                NumberOfCars++;
            }
        }
    }
    //Decreases the lives on the player when he is hit
    public void DecreaseLives()
    {
        livesNumber--;
        livesText.text = "Lives: " + livesNumber;
        if (livesNumber==0)
        {
            GameOver();
        }
    }
    //Increases the lives of the play when he gets a ball
    public void IncreaseLives()
    {
        livesNumber++;
        livesText.text = "Lives: " + livesNumber;
    }
    //Puts game on pause when game over
    public void GameOver()
    {
        _source.PlayOneShot(GameOver_sound);
        GameOverText.text = "Game Over!";
        IsGameOver = true;
        RestartButton.gameObject.SetActive(true);
    }
    //Plays sound with drunk cards hit
    public void DrunkCarHit()
    {
        _source.PlayOneShot(Hit_Car);
    }
    //Restarts game
    public void Restart()
    {
        score = 0;
        livesNumber = 10;
        livesText.text = "Lives: 10";
        GameOverText.text = "";
        IsGameOver = false;
        NumberOfCars = 1;
        SpawnCars();
        RestartButton.gameObject.SetActive(false);
    }
}
