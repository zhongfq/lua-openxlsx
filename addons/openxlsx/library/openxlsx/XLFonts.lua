---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLFonts

---An encapsulation of the XLSX fonts
---@class openxlsx.XLFonts 
local XLFonts = {}

---@return any
function XLFonts:__gc() end

---Get the count of fonts
---@return integer # The amount of font entries
function XLFonts:count() end

---Append a new XLFont, based on copyFrom, and return its index in fonts node
---@param copyFrom openxlsx.XLFont # Can provide an XLFont to use as template for the new style
---@param styleEntriesPrefix string # Prefix the newly created cell style XMLNode with this pugi::node_pcdata text
---@return integer # s The index of the new style as used by operator[]
---@overload fun(self: openxlsx.XLFonts): integer
---@overload fun(self: openxlsx.XLFonts, copyFrom: openxlsx.XLFont): integer
function XLFonts:create(copyFrom, styleEntriesPrefix) end

---Get the font identified by index
---@param index integer # The index within the XML sequence
---@return openxlsx.XLFont # An XLFont object
function XLFonts:fontByIndex(index) end

---@return openxlsx.XLFonts
function XLFonts.new() end

return XLFonts