---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLColor

---
---@class openxlsx.XLColor 
local XLColor = {}

---@return any
function XLColor:__gc() end

---@return any
function XLColor:__olua_move() end

---
---@return integer # 
function XLColor:alpha() end

---
---@return integer # 
function XLColor:blue() end

---
---@return integer # 
function XLColor:green() end

---
---@return string # 
function XLColor:hex() end

---@return openxlsx.XLColor
---
---
---\param alpha
---\param red
---\param green
---\param blue
---@overload fun(alpha: integer, red: integer, green: integer, blue: integer): openxlsx.XLColor
---
---
---\param red
---\param green
---\param blue
---@overload fun(red: integer, green: integer, blue: integer): openxlsx.XLColor
---
---
---\param hexCode
---@overload fun(hexCode: string): openxlsx.XLColor
function XLColor.new() end

---
---@return integer # 
function XLColor:red() end

---
---@param alpha integer # 
---@param red integer # 
---@param green integer # 
---@param blue integer # 
---
---
---\param red
---\param green
---\param blue
---@overload fun(self: openxlsx.XLColor, red: integer, green: integer, blue: integer)
---
---
---\param red
---\param green
---\param blue
---@overload fun(self: openxlsx.XLColor)
---
---
---\param red
---\param green
---\param blue
---@overload fun(self: openxlsx.XLColor, red: integer)
---
---
---\param red
---\param green
---\param blue
---@overload fun(self: openxlsx.XLColor, red: integer, green: integer)
---
---
---\param hexCode
---@overload fun(self: openxlsx.XLColor, hexCode: string)
function XLColor:set(alpha, red, green, blue) end

return XLColor