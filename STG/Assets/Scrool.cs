using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scrool : MonoBehaviour
{
    [SerializeField] float speed = 1;

    private void Update()
    {
        transform.position -= new Vector3(0, Time.deltaTime * speed);

        if(transform.position.y <= -11f)
        {
            transform.position = new Vector2(0, 21.33f);
        }
    }
}
