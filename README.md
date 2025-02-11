**Object Oriented Horse-Race**
``
classDiagram

    Horse <-- Race

    class Horse {
        -int id 
        -int position
        -const TRACK_LENGTH
        +Horse()
        +Horse(int id)
        +advance()
        +printLane()
        +isWinner()
    }
    
    class Race{
        -const int NUM_HORSES
      -Horse horses[NUM_HORSES]
      +Race()
      +startRace()
      
    }
