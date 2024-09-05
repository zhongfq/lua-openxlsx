---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCommand

---
---@class openxlsx.XLCommand 
local XLCommand = {}

---@return any
function XLCommand:__gc() end

---@return any
function XLCommand:__olua_move() end

---
---\tparam T
---@param param string # 
---@return boolean # 
function XLCommand:getParamBool(param) end

---
---\tparam T
---@param param string # 
---@return integer # 
function XLCommand:getParamInt(param) end

---
---\tparam T
---@param param string # 
---@return number # 
function XLCommand:getParamNumber(param) end

---
---\tparam T
---@param param string # 
---@return string # 
function XLCommand:getParamString(param) end

---
---@param type openxlsx.XLCommandType # 
---@return openxlsx.XLCommand
function XLCommand.new(type) end

---
---\tparam T
---@param param string # 
---@param value boolean # 
---@return openxlsx.XLCommand # 
function XLCommand:setParamBool(param, value) end

---
---\tparam T
---@param param string # 
---@param value integer # 
---@return openxlsx.XLCommand # 
function XLCommand:setParamInt(param, value) end

---
---\tparam T
---@param param string # 
---@param value number # 
---@return openxlsx.XLCommand # 
function XLCommand:setParamNumber(param, value) end

---
---\tparam T
---@param param string # 
---@param value string # 
---@return openxlsx.XLCommand # 
function XLCommand:setParamString(param, value) end

---
---@return openxlsx.XLCommandType # 
function XLCommand:type() end

return XLCommand