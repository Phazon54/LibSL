/* --------------------------------------------------------------------
Author: Sylvain Lefebvre    sylvain.lefebvre@sophia.inria.fr

                  Simple Library for Graphics (LibSL)

This software is a computer program whose purpose is to offer a set of
tools to simplify programming real-time computer graphics applications
under OpenGL and DirectX.

This software is governed by the CeCILL-C license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL-C
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL-C license and that you accept its terms.
-------------------------------------------------------------------- */
// ------------------------------------------------------
// LibSL::Math::Histogram
// ------------------------------------------------------
//
// Histogram class
// 
//
// Usage:
//
//   Histogram h;
//   ...
//   h << int(12);
//   h << int(20);
//   h << int(20);
//   h << int(20);
//   h << int(12);
//   ...
//   h.print();
//
// ------------------------------------------------------
// Sylvain Lefebvre - 2006-12-31
// ------------------------------------------------------

#pragma once

#include <LibSL/CppHelpers/CppHelpers.h>
#include <map>

namespace LibSL {
  namespace Math {

    class Histogram
    {
    protected:

      std::map<int,uint> m_Counters;
      uint               m_Num;

    public:

      Histogram()  
      {
        m_Num = 0;
      }

      ~Histogram() {  }

      void print()
      {
        std::cout << LibSL::CppHelpers::sprint("Histogram: %d entries\n",m_Num);
        for (std::map<int,uint>::const_iterator I = m_Counters.begin() ; I!=m_Counters.end() ; I++) {
          std::cout << LibSL::CppHelpers::sprint("   [%4d] ",(*I).first);
          uint l = (*I).second*64/m_Num;
          ForIndex(t,l) {
            std::cout << '#';
          }
          std::cout << LibSL::CppHelpers::sprint(" (%d)           \n",(*I).second);
        }
      }

      void printAsHTML(std::ostream& _out,bool vertical = false)
      {
        if ( ! vertical ) {
        
          _out << "<TABLE width='100%'>\n";
          for (std::map<int,unsigned int>::const_iterator I = m_Counters.begin(); I != m_Counters.end() ; I++) {
            float p = ((float)(*I).second * 100.0f) / (float)m_Num;
            _out << "<TR width='100%'  height='8px'><TD width='100%'  height='8px'>";
            _out << "<TABLE width='100%'  height='8px'><TR>";
            _out << LibSL::CppHelpers::sprint("<TD width='%d%%' bgcolor='#00FF00' height='8px'></TD>",(int)p);
            _out << LibSL::CppHelpers::sprint("<TD width='%d%%' bgcolor='#EFEFEF' height='8px'></TD>",100-(int)p);
            // _out << LibSL::CppHelpers::sprint("<TD>%d (%d)</TD>",(*I).first,(*I).second);
            _out << "</TR></TABLE>";
            _out << "</TD></TR>\n";
          }
          _out << "</TABLE>\n";

        } else {

          _out << "<TABLE><TR><TD>\n";
          for (std::map<int,unsigned int>::const_iterator I = m_Counters.begin(); I != m_Counters.end() ; I++) {
            float p = ((float)(*I).second * 100.0f) / (float)m_Num;
            _out << "</TD><TD>";
            _out << "<TABLE><TR><TD bgcolor='#EFEFEF' width='8pix' height=" << 100-(int)p << "px></TD></TR></TABLE>\n";
            _out << "<TABLE><TR><TD bgcolor='#00FF00' width='8pix' height=" << (int)p << "px></TD></TR></TABLE>\n";
          }
          _out << "</TD></TR></TABLE>\n";

        }
      }

      void printAsTex(std::ostream& _out, const char* title = "", const char* x_label = "", const char* y_label = "")
      {
        std::string h_values = "";
        float y_max = 0.0f;
        for (std::map<int, unsigned int>::const_iterator I = m_Counters.begin(); I != m_Counters.end(); I++) {
          y_max = max(y_max, (*I).second);
          h_values = h_values + " (" + std::to_string((*I).first) + ", " + std::to_string((*I).second) +  ") ";
        }
        y_max = ((y_max + y_max * 0.05f) + 50.0f) / 100.0f * 100.0f;
        y_max = std::ceil(y_max);
        
        _out << "\\documentclass[border=3mm, tikz, preview]{standalone}" << std::endl;
        _out << "\\usepackage{pgfplots}" << std::endl;
        _out << "\\begin{document}" << std::endl;
        _out << "\\begin{tikzpicture}" << std::endl;
        _out << LibSL::CppHelpers::sprint("\\begin{axis}[title={%s}, ", title);
        _out << LibSL::CppHelpers::sprint("xlabel={%s}, ylabel={%s}, ", x_label, y_label);
        _out << LibSL::CppHelpers::sprint("ymax=%d, ", y_max);
        _out << "ymin = 0, enlarge x limits = true, ";
        _out << "minor y tick num = 5, area style]" << std::endl;
        _out << "\\addplot+[mark = none, ybar] coordinates ";
        _out << LibSL::CppHelpers::sprint("{%s};", h_values.c_str()) << std::endl;
        _out << "\\end{axis}" << std::endl;
        _out << "\\end{tikzpicture}" << std::endl;
        _out << "\\end{document}" << std::endl;
      }

      void operator <<(const uint& key)
      {
        m_Counters[key] ++;
        m_Num ++;
      }

      uint operator[](int n)  { return (m_Counters[n]); }

      void clear()
      {
        m_Num = 0;
        m_Counters.clear();
      }

    };

  } //namespace LibSL::Math
} //namespace LibSL

// ------------------------------------------------------
