/**
 *
 * @file    rgbacolor.h
 * @author  Alexandre Sollier
 * @date    Janvier 2020
 * @version 1.1
 * @brief   Représente une couleur RGBA
 *
 **/

#ifndef RGBACOLOR_H
#define RGBACOLOR_H

#include <GL/freeglut.h> // GLubyte

#include "../tools/ieditable.h"

namespace nsGraphics
{

class RGBAcolor : public nsUtil::IEditable
{

public:
    RGBAcolor(const GLubyte& red = 0, const GLubyte& green = 0, const GLubyte& blue = 0, const GLubyte& alpha = 255);
    virtual ~RGBAcolor() override = default;

    bool operator==(const RGBAcolor& col) const;
    bool operator!=(const RGBAcolor& col) const;

    RGBAcolor operator+(const RGBAcolor& rhs) const;
    RGBAcolor operator*(const float& rhs) const;

    GLubyte getRed() const;
    void setRed(const GLubyte& red);

    GLubyte getGreen() const;
    void setGreen(const GLubyte& green);

    GLubyte getBlue() const;
    void setBlue(const GLubyte& blue);

    GLubyte getAlpha() const;
    void setAlpha(const GLubyte& alpha);

protected:
    virtual std::ostream& _Edit(std::ostream& os = std::cout) const override;

private:
    GLubyte m_red;
    GLubyte m_green;
    GLubyte m_blue;
    GLubyte m_alpha;

}; // class RGBAcolor

// Quelques couleurs trouvées sur:
// https://www.rapidtables.com/web/color/RGB_Color.html
const RGBAcolor KBlack       {  0,   0,   0};
const RGBAcolor KWhite       {255, 255, 255};
const RGBAcolor KRed         {255,   0,   0};
const RGBAcolor KLime        {  0, 255,   0};
const RGBAcolor KBlue        {  0,   0, 255};
const RGBAcolor KYellow      {255, 255,   0};
const RGBAcolor KCyan        {  0, 255, 255};
const RGBAcolor KMagenta     {255,   0, 255};
const RGBAcolor KSilver      {192, 192, 192};
const RGBAcolor KGray        {128, 128, 128};
const RGBAcolor KMaroon      {128,   0,   0};
const RGBAcolor KOlive       {128, 128,   0};
const RGBAcolor KGreen       {  0, 128,   0};
const RGBAcolor KPurple      {128,   0, 128};
const RGBAcolor KTeal        {  0, 128, 128};
const RGBAcolor KNavy        {  0,   0, 128};
const RGBAcolor KTransparent {  0,   0,   0,  0};

} // namespace nsGraphics

#endif // RGBACOLOR_H