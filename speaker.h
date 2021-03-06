#ifndef SPEAKER_H
#define SPEAKER_H

#include "target.h"
#include "track.h"


class Speaker {

  public:
  //attr:
  int defaultVolume; 
 // Track sounds[2]; // a hard-coded array of the two possible “sounds”: giggle and bo-ing
  Track songs[3]; // a hard-coded array of the three possible songs (each associated with a single color)
  
  //methods:
  int convertPressureToVolume(double pressure); 
  void playTrack(int vol, int idx, TrackType trackType);
  bool songPlaying();
  void updateSongs(bool& songEnded);

};

#endif
