
#include <string>

class BaseTerrainElement
{
  std::string mElementType;
public:
  BaseTerrainElement( std::string elementType )
  : mElementType{ elementType }
  {
  }
  
  virtual ~BaseTerrainElement() = default;
};
