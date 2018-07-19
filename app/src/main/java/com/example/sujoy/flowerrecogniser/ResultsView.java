package com.example.sujoy.flowerrecogniser;

import com.example.sujoy.flowerrecogniser.Classifier.Recognition;

import java.util.List;

public interface ResultsView {
  public void setResults(final List<Recognition> results);
}
