/*
 * =====================================================================================
 *
 *       Filename: tribool.hpp
 *        Created: 08/31/2015 08:52:57 PM
 *    Description: 
 *
 *        Version: 1.0
 *       Revision: none
 *       Compiler: g++ -std=c++11
 *
 *         Author: ANHONG
 *          Email: anhonghe@gmail.com
 *   Organization: USTC
 *
 * =====================================================================================
 */

#ifndef __TRIBOOL_HPP__
#define __TRIBOOL_HPP__
class tribool final
{
    private:
        int m_state;    // -1 : ?
                        //  0 : false
                        //  1 : true
    public:
        tribool()
            : m_state(-1)
        {}

        explicit tribool(bool b)
            : m_state(b)
        {}

    public:
        operator bool() const
        {
            return m_state == 1;
        }

        bool is(bool b) const
        {
            return m_state == (int)(b);
        }

        bool maybe(bool b) const
        {
            return m_state == -1 || is(b);
        }
};
#endif
