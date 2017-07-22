/*
  # This is a basic rover project, just for fun.
  # See it in action here : https://www.youtube.com/edit?video_id=AGPDNHpR9hc
  #
  # this script is distributed under Creative Commons Attribution-ShareAlike 3.0 License
*/

// boolean obstacle = false; true when an obstacle is detected within a particular range

void setup(void) 
{  
  initHead();
  initMotor();
} 

void loop(void) 
{
 
    MoveHead();
    
    // explore algorythm
    Explore();
    
    // stability ??
    delay(1);
}
