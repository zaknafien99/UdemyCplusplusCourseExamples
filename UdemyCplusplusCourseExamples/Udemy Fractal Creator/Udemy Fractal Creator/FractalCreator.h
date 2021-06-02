#pragma once

#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H

#include <string>
#include "zoom.h"
#include "bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "FractalCreator.h"
#include <cstdint>
#include <memory>
#include <math.h>

using namespace std;

namespace caveofprogramming {
	class FractalCreator
	{
	private:
		int m_width;
		int m_height;
		unique_ptr<int[]> m_histogram;
		unique_ptr<int[]> m_fractal;
		Bitmap m_bitmap;
		ZoomList m_zoomList;
		int m_total{ 0 };

	public:
		FractalCreator();
		FractalCreator(int width, int height);
		virtual ~FractalCreator();

		void calculateIteration();
		void calcuateTotalIterations();
		void drawFractal();
		void addZoom(const Zoom& zoom);
		void writeBitmap(string name);
	};
}
#endif // !FRACTALCREATOR_H	
