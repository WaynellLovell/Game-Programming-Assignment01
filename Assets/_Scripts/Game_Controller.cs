using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Game_Controller : MonoBehaviour {

    [Header("User Interface")]
    // The Actual GUI text objects
    public Text scoreText;
    public Text livesText;
    // The values we'll be printing
    private int score = 0;
    private int livesNumber = 10;
    private int plus1000 = 1000;

    public GameObject Car01;
    public GameObject Car02;
    public GameObject Car03;
    public GameObject Car04;
    public GameObject Ball;

    void Start ()
    {
        SpawnCars();
    }
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
    public void IncreaseScore(int increase)
    {
        score += increase;
        scoreText.text = "Score: " + score;
        if(score == plus1000)
        {
            plus1000 += 1000;
            Instantiate(Ball);
        }
    }
    public void DecreaseLives()
    {
        livesNumber--;
        livesText.text = "Lives: " + livesNumber;
    }
    public void IncreaseLives()
    {
        livesNumber++;
        livesText.text = "Lives: " + livesNumber;
    }
}
