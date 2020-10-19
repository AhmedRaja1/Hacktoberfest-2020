import pygame as pg

from Const import *


class Camera(object):
    def __init__(self, width, height):
        self.rect = pg.Rect(0, 0, width, height)
        self.complex_camera(self.rect)

        #This is a constructor for assigning a space for the camera.

    def complex_camera(self, target_rect):
        x, y = target_rect.x, target_rect.y
        width, height = self.rect.width, self.rect.height
        x, y = (-x + WINDOW_W / 2 - target_rect.width / 2), (-y + WINDOW_H / 2 - target_rect.height)

        x = min(0, x)
        x = max(-(self.rect.width - WINDOW_W), x)
        y = WINDOW_H - self.rect.h

        return pg.Rect(x, y, width, height)
#This is a function that returns a window of a pre-defined height
    def apply(self, target):
        return target.rect.x + self.rect.x, target.rect.y

    def update(self, target):
        self.rect = self.complex_camera(target)

    def reset(self):
        self.rect = pg.Rect(0, 0, self.rect.w, self.rect.h)
#The above 3 functions are the rendering functions of the game where the camera updates, resets and applies events.
