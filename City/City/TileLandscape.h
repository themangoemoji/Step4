/**
* \file TileLandscape.h
*
* \author Charles B. Owen
*
* \brief Class that implements a Landscape tile
*/

#pragma once

#include "Tile.h"


/**
* \brief A Landscape tile
*/
class CTileLandscape : public CTile
{
public:
    CTileLandscape(CCity *city);

    /// \brief Default constructor (disabled)
    CTileLandscape() = delete;

    /// \brief Copy constructor (disabled)
    CTileLandscape(const CTileLandscape &) = delete;

    ~CTileLandscape();

    virtual std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode> &node) override;
    virtual void XmlLoad(const std::shared_ptr<xmlnode::CXmlNode> &node);

};

