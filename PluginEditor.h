/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class MeterExampleAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    MeterExampleAudioProcessorEditor (MeterExampleAudioProcessor&);
    ~MeterExampleAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MeterExampleAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MeterExampleAudioProcessorEditor)
    foleys::LevelMeterLookAndFeel lnf;
    foleys::LevelMeter meter { foleys::LevelMeter::HasBorder }; // See foleys::LevelMeter::MeterFlags for options
    

};
