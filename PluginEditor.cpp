/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MeterExampleAudioProcessorEditor::MeterExampleAudioProcessorEditor (MeterExampleAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    lnf.setColour (foleys::LevelMeter::lmMeterGradientLowColour, juce::Colours::green);

    meter.setLookAndFeel (&lnf);
    meter.setMeterSource (&processor.getMeterSource());
    
    addAndMakeVisible (meter);
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 800);
}

MeterExampleAudioProcessorEditor::~MeterExampleAudioProcessorEditor()
{
    meter.setLookAndFeel (nullptr);
}

//==============================================================================
void MeterExampleAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    //g.setColour (Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
    
    const Rectangle<float> plotFrame (0.0f, 0.0f, getWidth(), getHeight());
    g.setColour (Colours::lightgreen);
    g.fillRect (plotFrame);
    
    
}

void MeterExampleAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor...
    meter.setBounds(100,100,50,(getHeight()/8)*6);
}
