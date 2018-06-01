
(cl:in-package :asdf)

(defsystem "qb_interface-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "cubeEq_Preset" :depends-on ("_package_cubeEq_Preset"))
    (:file "_package_cubeEq_Preset" :depends-on ("_package"))
    (:file "cubeCurrent" :depends-on ("_package_cubeCurrent"))
    (:file "_package_cubeCurrent" :depends-on ("_package"))
    (:file "cubePos" :depends-on ("_package_cubePos"))
    (:file "_package_cubePos" :depends-on ("_package"))
    (:file "cubeRef" :depends-on ("_package_cubeRef"))
    (:file "_package_cubeRef" :depends-on ("_package"))
    (:file "handRef" :depends-on ("_package_handRef"))
    (:file "_package_handRef" :depends-on ("_package"))
    (:file "handPos" :depends-on ("_package_handPos"))
    (:file "_package_handPos" :depends-on ("_package"))
    (:file "handCurrent" :depends-on ("_package_handCurrent"))
    (:file "_package_handCurrent" :depends-on ("_package"))
  ))