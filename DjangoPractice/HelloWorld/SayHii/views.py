from django.shortcuts import render

# Create your views here.

from django.http import HttpResponse

def Hello(request):
    return HttpResponse("<h1>Hello  , I am revising Django!</h1>")
