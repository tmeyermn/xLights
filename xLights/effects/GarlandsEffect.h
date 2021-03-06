#ifndef GARLANDSEFFECT_H
#define GARLANDSEFFECT_H

#include "RenderableEffect.h"

#define GARLANDS_CYCLES_MIN 0
#define GARLANDS_CYCLES_MAX 20

#define GARLANDS_SPACING_MIN 1
#define GARLANDS_SPACING_MAX 100

class GarlandsEffect : public RenderableEffect
{
    public:
        GarlandsEffect(int id);
        virtual ~GarlandsEffect();
        virtual void SetDefaultParameters() override;
        virtual void Render(Effect *effect, SettingsMap &settings, RenderBuffer &buffer) override;
        virtual bool AppropriateOnNodes() const override { return false; }
        virtual bool CanRenderPartialTimeInterval() const override { return true; }
protected:
        virtual wxPanel *CreatePanel(wxWindow *parent) override;

    private:
};

#endif // GARLANDSEFFECT_H
