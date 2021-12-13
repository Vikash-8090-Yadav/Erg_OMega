
from django.urls import path , include

from .import views

urlpatterns = [
    path('dg/',views.dgfess),
    path('html/',views.cssfess),
    path('css/',views.htmlfess),
    path('python/',views.pythonfess),
]
