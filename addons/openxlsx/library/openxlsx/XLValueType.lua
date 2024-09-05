---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLValueType

---@type openxlsx.XLValueType
local VALUE

---
---@enum openxlsx.XLValueType
---@operator call(integer): openxlsx.XLValueType
local XLValueType = {
    Boolean = 1,
    Empty = 0,
    Error = 4,
    Float = 3,
    Integer = 2,
    String = 5,
}

---@param v integer
---@return openxlsx.XLValueType
function XLValueType:__call(v) end

return XLValueType