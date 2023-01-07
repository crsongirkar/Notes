https://leetcode.com/problems/flood-fill/

/*
Graph Algorithm "Flood Fill"
  
 Flood fill (also known as seed fill) is an algorithm that determines the area connected to a given node in a multi-dimensional array.
  It is used in the “bucket” fill tool of a paint program to fill connected, similarly colored areas with a different color 
  and in games such as Go and Minesweeper for determining which pieces are cleared. 
  When applied on an image to fill a particular bounded area with color, it is also known as boundary fill.

   
   For Eg :- 
    The flood fill algorithm takes three parameters: a 'image', a 'color', and a 'newColor'.
    Consider the following matrix to the left – if the start node is (3, 9), target color is "BLACK" and "replacement"color is "GREY", 
    the algorithm looks for all nodes in the matrix that are connected to the start node by a path of the "iamge" color and changes them to the replacement color.
 
**********************************************************************************************************************************************************************************************     

Q  :-  An image is represented by an m x n integer grid image where,
image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and color. 
You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to 
the starting pixel of the same color as ,the starting pixel, plus any pixels connected 4-directionally 
to those pixels (also with the same color),and so on. Replace the color of all of the aforementioned pixels with color.

Return the modified image after performing the flood fill

Example :- 

Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation: From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), 
all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.

*/

// *******************************************************************************************************************************************************************
class Solution {
public:
    
      bool Isvaild(vector<vector<int>>& image, int i, int j, int n, int m , int color){
        
        if(i>=0 && i<n && j>=0 && j<m && image[i][j] == color)
            return true;
        
        return false;
    }
     
    
    void floodFillRec(vector<vector<int>>& image, int i, int j, int n, int m , int color, int newColor)
    {
        image[i][j]=newColor;
        
        
        if(Isvaild(image , i+1 ,j, n, m,color))
           floodFillRec(image, i+1, j, n, m , color, newColor);
        
         if(Isvaild(image , i-1 ,j, n, m,color))
           floodFillRec(image, i-1, j, n, m , color, newColor);
        
         if(Isvaild(image , i , j+1, n , m, color))
           floodFillRec(image, i, j+1 , n, m , color, newColor);
        
        
          if(Isvaild(image , i , j-1 , n, m, color))
            floodFillRec(image, i, j-1, n, m , color, newColor);
          
          
        
        
    }

       vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int n = image.size();
        int m = image[0].size();
        
        
        int color = image[sr][sc]; 
        
        if(color == newColor)
            return image;
        
        floodFillRec(image ,sr ,sc , n, m,color ,newColor);   // create a recurcive function
        
        return image;
        
    }
};
