from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def learndg(request):
	return HttpResponse('<h1> am learning django</h1>')



def learnpython(request):
	return HttpResponse('<h1> am learning python</h1>')



def learnhtml(request):
	return HttpResponse('<h1> am learning learnhtml</h1>')


def learncss(request):
	return HttpResponse('<h1> am learning css</h1>')