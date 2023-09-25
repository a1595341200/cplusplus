;; Auto-generated. Do not edit!


(when (boundp 'data_parse::LHParam)
  (if (not (find-package "DATA_PARSE"))
    (make-package "DATA_PARSE"))
  (shadow 'LHParam (find-package "DATA_PARSE")))
(unless (find-package "DATA_PARSE::LHPARAM")
  (make-package "DATA_PARSE::LHPARAM"))

(in-package "ROS")
;;//! \htmlinclude LHParam.msg.html


(defclass data_parse::LHParam
  :super ros::object
  :slots (_LH_C0 _LH_C1 _LH_C2 _LH_C3 ))

(defmethod data_parse::LHParam
  (:init
   (&key
    ((:LH_C0 __LH_C0) 0.0)
    ((:LH_C1 __LH_C1) 0.0)
    ((:LH_C2 __LH_C2) 0.0)
    ((:LH_C3 __LH_C3) 0.0)
    )
   (send-super :init)
   (setq _LH_C0 (float __LH_C0))
   (setq _LH_C1 (float __LH_C1))
   (setq _LH_C2 (float __LH_C2))
   (setq _LH_C3 (float __LH_C3))
   self)
  (:LH_C0
   (&optional __LH_C0)
   (if __LH_C0 (setq _LH_C0 __LH_C0)) _LH_C0)
  (:LH_C1
   (&optional __LH_C1)
   (if __LH_C1 (setq _LH_C1 __LH_C1)) _LH_C1)
  (:LH_C2
   (&optional __LH_C2)
   (if __LH_C2 (setq _LH_C2 __LH_C2)) _LH_C2)
  (:LH_C3
   (&optional __LH_C3)
   (if __LH_C3 (setq _LH_C3 __LH_C3)) _LH_C3)
  (:serialization-length
   ()
   (+
    ;; float64 _LH_C0
    8
    ;; float64 _LH_C1
    8
    ;; float64 _LH_C2
    8
    ;; float64 _LH_C3
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _LH_C0
       (sys::poke _LH_C0 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _LH_C1
       (sys::poke _LH_C1 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _LH_C2
       (sys::poke _LH_C2 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _LH_C3
       (sys::poke _LH_C3 (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _LH_C0
     (setq _LH_C0 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _LH_C1
     (setq _LH_C1 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _LH_C2
     (setq _LH_C2 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _LH_C3
     (setq _LH_C3 (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get data_parse::LHParam :md5sum-) "e4226e7fb1ecf4c39595d9d3e9996560")
(setf (get data_parse::LHParam :datatype-) "data_parse/LHParam")
(setf (get data_parse::LHParam :definition-)
      "float64 LH_C0
float64 LH_C1
float64 LH_C2
float64 LH_C3
")



(provide :data_parse/LHParam "e4226e7fb1ecf4c39595d9d3e9996560")


