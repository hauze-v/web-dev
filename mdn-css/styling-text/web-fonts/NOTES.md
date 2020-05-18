# Web Fonts #
In this article we will go further, exploring web fonts in detail - these allow you to download custom fonts along with your web page, to allow for more varied, custom text styling.

## Font families recap ##
Fonts applied to your HTML can be controlled using the `font-family` property. This takes one or more font family names, and the browser travels down the list until it finds a font it has available on the system it is running.

p {
  font-family: Helvetica, "Trebuchet MS", Verdana, sans-serif;
}

This system works well, but traditionally web developers' font choices were limited. There are ony a handful of fonts that you can guaranteee to be available across all common systems - the so-called Web-safe fonts.

You can use the font stack to specify preferable fonts, followed by web-safe alternatives, followed by the default system font, but this adds overhead in terms of testing to make sure that you designs look ok with each font, etc.

## Web fonts ##