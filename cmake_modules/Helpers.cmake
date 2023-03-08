# A macro that can be called by doing set_platform(). Macros leak scope globally
macro(set_platform)
    if(APPLE)
        # MacOS, iOS, watchOS, tvOS
        set(MP_PLATFORM "Apple")
    elseif(WIN32 OR WIN64)
        # Any windows
        set(MP_PLATFORM "Win64")
    elseif(UNIX AND NOT APPLE)
        # Nix
        set(MP_PLATFORM "Linux")
    else()
        # Dont know
        set(MP_PLATFORM "NA")
    endif()
    
endmacro()