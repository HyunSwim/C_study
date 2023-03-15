; Auto-generated. Do not edit!


(cl:in-package morai_msgs-msg)


;//! \htmlinclude IntersectionStatus.msg.html

(cl:defclass <IntersectionStatus> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (intersection_index
    :reader intersection_index
    :initarg :intersection_index
    :type cl:string
    :initform "")
   (intersection_status
    :reader intersection_status
    :initarg :intersection_status
    :type cl:fixnum
    :initform 0)
   (intersection_status_time
    :reader intersection_status_time
    :initarg :intersection_status_time
    :type cl:float
    :initform 0.0)
   (traffic_light_index
    :reader traffic_light_index
    :initarg :traffic_light_index
    :type cl:string
    :initform "")
   (traffic_light_status
    :reader traffic_light_status
    :initarg :traffic_light_status
    :type cl:fixnum
    :initform 0)
   (traffic_light_next_status
    :reader traffic_light_next_status
    :initarg :traffic_light_next_status
    :type cl:fixnum
    :initform 0))
)

(cl:defclass IntersectionStatus (<IntersectionStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IntersectionStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IntersectionStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name morai_msgs-msg:<IntersectionStatus> is deprecated: use morai_msgs-msg:IntersectionStatus instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:header-val is deprecated.  Use morai_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'intersection_index-val :lambda-list '(m))
(cl:defmethod intersection_index-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:intersection_index-val is deprecated.  Use morai_msgs-msg:intersection_index instead.")
  (intersection_index m))

(cl:ensure-generic-function 'intersection_status-val :lambda-list '(m))
(cl:defmethod intersection_status-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:intersection_status-val is deprecated.  Use morai_msgs-msg:intersection_status instead.")
  (intersection_status m))

(cl:ensure-generic-function 'intersection_status_time-val :lambda-list '(m))
(cl:defmethod intersection_status_time-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:intersection_status_time-val is deprecated.  Use morai_msgs-msg:intersection_status_time instead.")
  (intersection_status_time m))

(cl:ensure-generic-function 'traffic_light_index-val :lambda-list '(m))
(cl:defmethod traffic_light_index-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:traffic_light_index-val is deprecated.  Use morai_msgs-msg:traffic_light_index instead.")
  (traffic_light_index m))

(cl:ensure-generic-function 'traffic_light_status-val :lambda-list '(m))
(cl:defmethod traffic_light_status-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:traffic_light_status-val is deprecated.  Use morai_msgs-msg:traffic_light_status instead.")
  (traffic_light_status m))

(cl:ensure-generic-function 'traffic_light_next_status-val :lambda-list '(m))
(cl:defmethod traffic_light_next_status-val ((m <IntersectionStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader morai_msgs-msg:traffic_light_next_status-val is deprecated.  Use morai_msgs-msg:traffic_light_next_status instead.")
  (traffic_light_next_status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IntersectionStatus>) ostream)
  "Serializes a message object of type '<IntersectionStatus>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'intersection_index))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'intersection_index))
  (cl:let* ((signed (cl:slot-value msg 'intersection_status)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'intersection_status_time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'traffic_light_index))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'traffic_light_index))
  (cl:let* ((signed (cl:slot-value msg 'traffic_light_status)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'traffic_light_next_status)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IntersectionStatus>) istream)
  "Deserializes a message object of type '<IntersectionStatus>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'intersection_index) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'intersection_index) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'intersection_status) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'intersection_status_time) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'traffic_light_index) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'traffic_light_index) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'traffic_light_status) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'traffic_light_next_status) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IntersectionStatus>)))
  "Returns string type for a message object of type '<IntersectionStatus>"
  "morai_msgs/IntersectionStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IntersectionStatus)))
  "Returns string type for a message object of type 'IntersectionStatus"
  "morai_msgs/IntersectionStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IntersectionStatus>)))
  "Returns md5sum for a message object of type '<IntersectionStatus>"
  "572673c33cdaae6543f2464d6fe5a5e0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IntersectionStatus)))
  "Returns md5sum for a message object of type 'IntersectionStatus"
  "572673c33cdaae6543f2464d6fe5a5e0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IntersectionStatus>)))
  "Returns full string definition for message of type '<IntersectionStatus>"
  (cl:format cl:nil "Header header~%string intersection_index~%int16 intersection_status~%float32 intersection_status_time~%~%string traffic_light_index~%int16 traffic_light_status~%int16 traffic_light_next_status~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IntersectionStatus)))
  "Returns full string definition for message of type 'IntersectionStatus"
  (cl:format cl:nil "Header header~%string intersection_index~%int16 intersection_status~%float32 intersection_status_time~%~%string traffic_light_index~%int16 traffic_light_status~%int16 traffic_light_next_status~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IntersectionStatus>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'intersection_index))
     2
     4
     4 (cl:length (cl:slot-value msg 'traffic_light_index))
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IntersectionStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'IntersectionStatus
    (cl:cons ':header (header msg))
    (cl:cons ':intersection_index (intersection_index msg))
    (cl:cons ':intersection_status (intersection_status msg))
    (cl:cons ':intersection_status_time (intersection_status_time msg))
    (cl:cons ':traffic_light_index (traffic_light_index msg))
    (cl:cons ':traffic_light_status (traffic_light_status msg))
    (cl:cons ':traffic_light_next_status (traffic_light_next_status msg))
))
