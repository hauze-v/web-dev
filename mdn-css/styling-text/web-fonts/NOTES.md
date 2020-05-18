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
There's an alternative that works very well, right back to IE version 6. Web fonts are a CSS feature that allows you uto specify font files to be downloaded along with your websites as it is accessed, meaning that any browser that supports web fonts can have exactly the fonts you specify available to it. Amazing! The syntx required looks something like this: 

First of all, you'll have a  `@font-face` block at the start of the CSS, which specifies the font files to download.

@font-face {
  font-family: "myFont";
  src: url("myFont.woff");
}

Below this you can then use the font family name specified inside `@font-face` to apply your custom font to anything you like, as norma:

html {
  font-family: "myFont", "Bitstream Vera Serif", serif;
}

The syntax does get a bit more complex than this; we'll go into more detail below. 

There are two important things to bear in mind about web fonts:

  1. Browsers support different font formats, so you'll need multiple font formats for decent cross-browser support. For example, most modern browsers support WOFF/WOFF2 (Web Open Font Format versions 1 & 2), the most efficient format around, but older versions of IE only support EOT (Embedded Open Type) fonts, and you might need to include an SVG version of the font to support older versions of iPhone and Android browsers. We'll show you below how to generate the required code.
  2. Fonts generally aren't free to use. You have to pay for them, and/or follow other license conditions such as crediting the font creator in the code (or on your site). You shouldn't steal fonts and use them without giving proper credit.

## Active learning: A web font example ##
