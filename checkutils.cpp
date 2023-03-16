namespace checkutils
{
    #include "checkutils.h"

    bool uint_check(std::string nvalue)
    {
        try
        {
            nvalue = std::stoi(nvalue);
            if(nvalue < 0)
                return false;
        }
        catch(const std::exception& e)
        {
            return false;
        }
        return true;
    }

    bool int_check(std::string nvlaue)
    {
        try
        {
            nvalue = std::stoi(nvalue);
        }
        catch(const std::exception& e)
        {
            return false;
        }
        return true;
    }

    bool float_check(std::string nvalue)
    {
        try
        {
            nvalue = std::stod(nvalue);
        }
        catch(const std::exception& e)
        {
            return false;
        }
        return true;   
    }
}