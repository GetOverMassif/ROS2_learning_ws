#!/usr/bin/python3
# -*- coding: utf-8 -*-


from typing import List
import rclpy
from rclpy.context import Context
from rclpy.node import Node
import time

from rclpy.parameter import Parameter

class HelloWorldNode(Node):
    def __init__(self, name):
        super().__init__(name)
        cnt = 0
        while rclpy.ok():
            self.get_logger().info(f"Hello World {cnt}")
            cnt += 2
            time.sleep(0.5)

def main(args=None):
    rclpy.init(args=args)
    node = HelloWorldNode("node_helloworld_class_python")
    node.destroy_node()
    rclpy.shutdown()