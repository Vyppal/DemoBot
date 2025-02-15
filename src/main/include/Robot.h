#pragma once

#include <frc/TimedRobot.h>
#include <ctre/Phoenix.h>
#include <frc/XboxController.h>
#include <frc/DoubleSolenoid.h>
#include <frc/Compressor.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:
};
