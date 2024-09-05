---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.IZipArchive

---This class functions as a wrapper around any class that provides the necessary functionality for
---a zip archive.
---\details This class works by applying 'type erasure'. This enables the use of objects of any class, the only
---requirement being that it provides the right interface. No inheritance from a base class is needed.
---@class openxlsx.IZipArchive 
---@field valid boolean 
local IZipArchive = {}

---@return any
function IZipArchive:__gc() end

---@return any
function IZipArchive:__olua_move() end

---@param name string
---@param data string
function IZipArchive:addEntry(name, data) end

function IZipArchive:close() end

---@param entryName string
function IZipArchive:deleteEntry(entryName) end

---@param name string
---@return string
function IZipArchive:getEntry(name) end

---@param entryName string
---@return boolean
function IZipArchive:hasEntry(entryName) end

---@return boolean
function IZipArchive:isOpen() end

---@return boolean
function IZipArchive:isValid() end

---Default constructor
---@return openxlsx.IZipArchive
function IZipArchive.new() end

---@param fileName string
function IZipArchive:open(fileName) end

---@param path string
function IZipArchive:save(path) end

return IZipArchive