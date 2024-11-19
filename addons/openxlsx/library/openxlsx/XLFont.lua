---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLFont

---An encapsulation of a font item
---@class openxlsx.XLFont 
local XLFont = {}

---@return any
function XLFont:__gc() end

---Get the font bold status
---@return boolean # true = bold, false = not bold
function XLFont:bold() end

---Get the condense status
---@return boolean # a TBD bool
---\todo need to find a use case for this
function XLFont:condense() end

---Get the extend status
---@return boolean # a TBD bool
---\todo need to find a use case for this
function XLFont:extend() end

---Get the font charset
---@return integer # The font charset id
function XLFont:fontCharset() end

---Get the font color
---@return openxlsx.XLColor # The font color
function XLFont:fontColor() end

---Get the font family
---@return integer # The font family id
function XLFont:fontFamily() end

---Get the font name
---@return string # The font name
function XLFont:fontName() end

---Get the font size
---@return integer # The font size
function XLFont:fontSize() end

---Get the font italic (cursive) status
---@return boolean # true = italic, false = not italice
function XLFont:italic() end

---@return openxlsx.XLFont
function XLFont.new() end

---Get the outline status
---@return boolean # a TBD bool
---\todo need to find a use case for this
function XLFont:outline() end

---get the font scheme: none, major or minor
---@return openxlsx.XLFontSchemeStyle # An XLFontSchemeStyle
function XLFont:scheme() end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setBold(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setCondense(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setExtend(set) end

---@param newCharset integer
---@return boolean
function XLFont:setFontCharset(newCharset) end

---@param newColor openxlsx.XLColor
---@return boolean
function XLFont:setFontColor(newColor) end

---@param newFamily integer
---@return boolean
function XLFont:setFontFamily(newFamily) end

---Setter functions for style parameters
---\param value that shall be set
---@return boolean # true for success, false for failure
---@param newName string
function XLFont:setFontName(newName) end

---@param newSize integer
---@return boolean
function XLFont:setFontSize(newSize) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setItalic(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setOutline(set) end

---@param newScheme openxlsx.XLFontSchemeStyle
---@return boolean
function XLFont:setScheme(newScheme) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setShadow(set) end

---@param set boolean
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setStrikethrough(set) end

---@param style openxlsx.XLUnderlineStyle
---@return boolean
---@overload fun(self: openxlsx.XLFont): boolean
function XLFont:setUnderline(style) end

---@param newVertAlign openxlsx.XLVerticalAlignRunStyle
---@return boolean
function XLFont:setVertAlign(newVertAlign) end

---Get the shadow status
---@return boolean # a TBD bool
---\todo need to find a use case for this
function XLFont:shadow() end

---Get the font strikethrough status
---@return boolean # true = strikethrough, false = no strikethrough
function XLFont:strikethrough() end

---Return a string summary of the font properties
---@return string # string with info about the font object
function XLFont:summary() end

---Get the font underline status
---@return openxlsx.XLUnderlineStyle # An XLUnderlineStyle value
function XLFont:underline() end

---get the font vertical alignment run style: baseline, subscript or superscript
---@return openxlsx.XLVerticalAlignRunStyle # An XLVerticalAlignRunStyle
function XLFont:vertAlign() end

return XLFont