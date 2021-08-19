import pygame

#pygame.display.get_num_displays()
pygame.display.set_mode((800,400))
pygame.display.set_caption("Namo Namo ji shankara")

color = (255,4,5)

def game():
    
    run = True
    while run:
        
        for event in pygame.event.get():
            
            if event.type == pygame.QUIT:
                run = False
            
                    
        # WIN.fill(color)

        # pygame.display.update()
    
  
    
  
    pygame.quit()
    
if __name__ == '__game__':
    game()