#ifndef PLOTLINES_H
#define PLOTLINES_H
#define QWT_DLL

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_magnifier.h>
#include <qwt_legend.h>
#include <qwt_point_data.h>

#include <QMainWindow>

class plotLines : public QwtPlot
{
    Q_OBJECT
public:
    explicit plotLines(QWidget *parent = 0);
};

#endif // PLOTLINES_H
