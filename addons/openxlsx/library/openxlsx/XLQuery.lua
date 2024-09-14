---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLQuery

---
---@class openxlsx.XLQuery 
local XLQuery = {}

---@return any
function XLQuery:__gc() end

---
---\tparam T
---@param param string # 
---@return boolean # 
function XLQuery:getParamBool(param) end

---
---\tparam T
---@param param string # 
---@return integer # 
function XLQuery:getParamInt(param) end

---
---\tparam T
---@param param string # 
---@return number # 
function XLQuery:getParamNumber(param) end

---
---\tparam T
---@param param string # 
---@return string # 
function XLQuery:getParamString(param) end

---
---@param type openxlsx.XLQueryType # 
---@return openxlsx.XLQuery
function XLQuery.new(type) end

---
---\tparam T
---@param param string # 
---@param value boolean # 
---@return openxlsx.XLQuery # 
function XLQuery:setParamBool(param, value) end

---
---\tparam T
---@param param string # 
---@param value integer # 
---@return openxlsx.XLQuery # 
function XLQuery:setParamInt(param, value) end

---
---\tparam T
---@param param string # 
---@param value number # 
---@return openxlsx.XLQuery # 
function XLQuery:setParamNumber(param, value) end

---
---\tparam T
---@param param string # 
---@param value string # 
---@return openxlsx.XLQuery # 
function XLQuery:setParamString(param, value) end

---
---@return openxlsx.XLQueryType # 
function XLQuery:type() end

return XLQuery