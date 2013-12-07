#ifndef SPEEDMISMATCHNODE_H
#define SPEEDMISMATCHNODE_H
#include <QtCore>
#include <NoobaVSSAD/featurenode.h>
#include <configuration.h>
class speedmismatchnode: public FeatureNode
{
public:
    explicit speedmismatchnode(FeatureNode* parent = 0);
    //~speedmismatchnode();

    void processEvents(const QList<DetectedEvent> event);
    //speedmismatchnode();
    void setMaxSpeedThresh(int val);
    void setMinSpeedThresh(int val);
    void setSpeedAnomaly(QString val);
    void setCrowdType(QString val);
    //void


private:
    int Max_Speed_Thresh;
    int Min_Speed_Thresh;
    QString Selected_Anmaly;
    QString Selected_crowd_type;

    Configuration config;

    QString SPEEDANOMALYMAX ;
    QString SPEEDANOMALYMIN ;
    QString SPEEDANOMALYRANGE ;
    bool isMaxSpeedThresholdpassed(int val);
    bool isMinSpeedThresholdBelowed(int val);


};

#endif // SPEEDMISMATCHNODE_H
