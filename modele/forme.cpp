
#include "forme.h"

using namespace std;

Forme::Forme()
{
    m_label = new string;

}

Forme::Forme(const std::string& label, int color, int fillColor, int thickness)
{
    m_label = new string(label);
    m_color = color;
    m_fillColor= fillColor;
    m_thickness = thickness;
}

Forme::Forme(const Forme& other)
{
    m_color = other.m_color;
    m_fillColor= other.m_fillColor;
    m_label = new string(*(other.m_label));
    m_thickness = other.m_thickness;
}

// virtual
Forme::~Forme()
{
    delete m_label;

}

Forme& Forme::operator=(const Forme& other)
{
    SetLabel(*(other.m_label));
    SetColor(other.m_color);
    SetFillColor(other.m_fillColor);
    SetThickness(other.m_thickness);
    return *this;
}

void Forme::SetLabel(const std::string& label)
{
    *m_label = label;
}
void Forme::SetColor(int color) {

    m_color= color;
}
void Forme::SetFillColor(int fillColor) {
    m_fillColor= fillColor;
}

void Forme::SetThickness(int thickness) {
    m_thickness = thickness;
}

std::string Forme::GetLabel() const
{

    return *(m_label);
}
int Forme::GetColor() const {

    return m_color;
}
int Forme::GetFillColor() const {

    return m_fillColor;
}

int Forme::GetThickness() const {
    return m_thickness;
}