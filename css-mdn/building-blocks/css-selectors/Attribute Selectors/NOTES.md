# Attribute Selectors #
These selectors enable the selection of an element based on the presence of an attribute alone (for example `href`), or on various different matches against the value of the attribute.

Selector --- `[attr]`
Example --- `a[title]`
Description --- Matches elements with an *attr* (whose name is the value in square brackets)

Selector --- `[attr=value]`
Example --- `a[href="https://example.com"]`
Description --- Matches elements with an *attr* whose value is exactly *value* - the string inside the quotes.

Selector --- `[attr~=value]`
Example --- `p[class~="special"]`
Description --- Matches elements with an *attr* whose value is exactly *value*, or contains *value* in its (space separated) list of values.

Selector --- `[attr|=value]`
Example --- `div[lang|="zh"]`
Description --- Matches elements with an *attr* whose value is exactly *value*, or begins with *value* immediately followed by a hyphen

In the html example we can see these selectors being used:
  By using `li[class]` we can match any selector with a class attribute. This matches all but the first list item.
  `li[class="a"]` matches a selector with a class of `a`, but not a selector with a class of `a` that also has another space-separated class as part of the value.
  `li[class~="a"]` will match a class of `a` but also a value that contains the class of `a` as part of a whitespace-separated list. 

## Substring matching selectors ##
These selectors allow for more advanced matching of substrings inside the value of your attribute. For example, if you had classes of `box-warning` and `box-error` and wanted to match everything that started with the string "box-", you could use `[class^="box-"]` to select them both (or `[class|="box"]` as described in section above).

Selector: `[attr^=value]`
  Example: `li[class^="box-"]`
  Description: Matches elements with an *attr* (whose name is the value in square brackets), whose value begins with *value*.

Selector: `attr$=value`
  Example: `li[class$="-box"]`
  Description: Matches elements with an *attr* whose value ends with *value*

Selector: `[attr*=value]`
  Example: `li[class*="box"]`
  Description: Matches elements with an *attr* whose value contains *value* anywhere within the string.

## Case-sensitivity ##
If you want to match attribute values case-insensitively you can use the value `i` before the closing bracket. This flag tells the browserr to match ASCII characters case-insensitively. 

Without the flag the values will be matched according to the case-sensitivity of the document language - in HTML's case it will be case sensitive.
