# Advanced Text Formatting #

## Quotations ##
If a sectio nof block level content is quoted, wrap it in a <blockquote> element to signify
and include a URL pointing to the source of the quote inside a cite attribute.

### Inline Quotations ### 
Work the same way except use the <q> element.

## Abbreviations ##
<abbr> is used to wrap around an abbriviation or acronym, and provide a full expansion of the term (included inside a title attribute)

## Marking up Contact Details ##
<Address> can be used to wrap a <p> or even <ul> which includes phone number and email

## Representing computer code ##
There are a number of elements available for marking up computer code using HTML:
<code>: For marking up generic pieces of computer code

<pre>: For retaining whitespace (generally code blocks) -- if you use indentation or excess whitespace inside your text, browsers will ignore it and you will not see it on your rendered page. If you wrap the text in <pre></pre> tags however, your whitespace will be rendered identically to how you see it in your text editor.

<var>: For specifically marking up variable names

<kbd>: For marking up keyboard (and other types of) input entered into the computer

<samp>: For marking up the output of a computer program