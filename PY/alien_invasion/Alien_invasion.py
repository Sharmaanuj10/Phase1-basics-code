import pygame

speed = 3
bullet_speed = 7
Width , Height = 900,400
WIN = pygame.display.set_mode((Width , Height))
pygame.display.set_caption("Space_fight") #pygame>display>set_caption '>' mean in
FPS = 62
max_bullet = 3
ship_Width , ship_Height = 40,50   # width is --- and hight is |

red_bullet = []
yellow_bullet =[]

Border = pygame.Rect(Width/2 -5,0 ,10, Height ) # Rect((left, top), (width, height))

Yellow_space_ship = pygame.image.load('F:/Be Anuj/py/alien_invasion/Assets/spaceship_yellow.png')
Yellow_ship = pygame.transform.scale(Yellow_space_ship,(ship_Height , ship_Width))
YellowShip = pygame.transform.rotate(Yellow_ship,270) # here 270 is 270 degree of rotation

Red_space_ship = pygame.image.load('F:/Be Anuj/py/alien_invasion/Assets/spaceship_red.png')
Red_ship  = pygame.transform.scale(Red_space_ship,(ship_Height , ship_Width)) # this is for resizeing the ship
RedShip =  pygame.transform.rotate(Red_ship,90) # and here we rotate it you can also do both in the same line too

Space = pygame.image.load('F:/Be Anuj/py/alien_invasion/Assets/space.png')
# also def fucntion is used to wrap those both upper data


def drawing(red,yellow):
    color2 = (0,0,0)    
    color = (255,4,5)
    WIN.blit(Space , (0,0)) # WIN.fill(color) # you can use this instead of the picture
    #blit is used to draw and item in the pygame space 'WIN'
    
    pygame.draw.rect(WIN , color2, Border)

    WIN.blit(RedShip,(red.x,red.y)) 
    WIN.blit(YellowShip,(yellow.x,yellow.y))
    pygame.display.update()
    
def yellow_movement(key_pressed, yellow):
    if key_pressed[pygame.K_UP] and yellow.y>0:
        yellow.y -=speed
    
    elif key_pressed[pygame.K_RIGHT] and yellow.x + yellow.height -speed <Width:
        yellow.x+=speed

    elif key_pressed[pygame.K_DOWN] and yellow.y + yellow.width<Height:
        yellow.y+=speed
    
    elif key_pressed[pygame.K_LEFT] and yellow.x -speed >Border.x:
        yellow.x -=speed
    pass

def red_movement(key_pressed,red):

    if key_pressed[pygame.K_w] and red.y -speed>0:
        red.y -=speed
    elif key_pressed[pygame.K_s] and red.y + red.width <Height:
        red.y+=speed
    elif key_pressed[pygame.K_a] and red.x -speed>0:
        red.x -=speed
    elif key_pressed[pygame.K_d] and red.x + speed + red.width <Border.x :
            red.x+=speed

def collision_buller(yellow_bullet , red_bullet , yellow , red):
    for bullet in yellow_bullet:
        bullet.x += bullet_speed
        if yellow.colliderect(bullet):
            yellow_bullet.remove(bullet)
def  game():
    
    
    red = pygame.Rect(100,200 ,ship_Height,ship_Width)  
    yellow = pygame.Rect(700,200 ,ship_Height,ship_Width)
    clock = pygame.time.Clock() # IN the pygame>time>clock method>tick method to set the fps
    
    run = True
    while run:

        clock.tick(FPS)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False
            
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_RCTRL and len(yellow_bullet) < max_bullet:
                    bullet = pygame.Rect(yellow.x + yellow.width,yellow.y +yellow.height/2 ,ship_Width/2 , ship_Height/2) # you can also define the width and height here
               
                    yellow_bullet.append(bullet)
                    
                if event.key == pygame.K_RCTRL and len(red_bullet) < max_bullet:
                    bullet= pygame.Rect(red.x + red.width, red.y +red.height/2 ,ship_Width/2 , ship_Height/2)

                    red_bullet.append(bullet)

                collision_buller(yellow_bullet , red_bullet , yellow , red)


        
        key_pressed = pygame.key.get_pressed()
        yellow_movement(key_pressed,yellow)
        red_movement(key_pressed,red)
        drawing(red,yellow) 
                       
        




    pygame.quit()

game()
490/1000