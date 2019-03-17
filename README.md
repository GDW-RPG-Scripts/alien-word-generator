Alien Word Generator
====================

Extensible alien name and word generator for Traveller and other 2D6 Sci-fi RPGs.

Building Alien Word Generator from source
-----------------------------------------

1. Download and install Qt5 Creator and a suitable compiler kit for your
   platform.
2. Open Qt Creator and select "New Project". Click on the "Import Project"
   project template and then "Git Clone". Click on the "Choose..." button to
   continue.
3. Enter the repository URL in the "Repository" field and choose a path to
   check out the source into. Click on the "Continue" button.
4. Click on one of the green arrows in the the bottom right of the Qt Creator
   window to Run or Debug the application.

Design Notes
------------

This application is designed to be extensible within the framework of the
language mapping matrixes provided in the various Classic Traveller alien
modules published. Adding a new language is done by adding the name of it in
alphabetical order in the LanguageType enum in language.hh, adding the V, CV,
VC, CVC generator mapping for the language in syllable.cc, the character
mapping in letter.cc, and finally add the name of the language in the drop-down
combo-box in workspace.ui. Sizes should then be recalculated automatically by
the compiler.

The heart of the generator is in the for-loop in Generate() in language.cc.
The three-dimensional SYLLABLE array is indexed for each syllable with the
language, syllable type, and a random number, yielding a functor
(function-object) from the matrix that is then called with a variable
containing the word under construction. Every loop returns the next syllable
type to use, as these are dependent on the language, and the previously
selected syllable.
