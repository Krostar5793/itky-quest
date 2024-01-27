'use client';

import { useState } from 'react';
import Box from '@mui/material/Box';
import Button from '@mui/material/Button';
import Typography from '@mui/material/Typography';
import Modal from '@mui/material/Modal';
import Fab from '@mui/material/Fab';
import AddIcon from '@mui/icons-material/Add';
import IconButton from '@mui/material/IconButton';
import CloseIcon from '@mui/icons-material/Close';

const style = {
  position: 'absolute' as 'absolute',
  top: '50%',
  left: '50%',
  transform: 'translate(-50%, -50%)',
  height: '60vh',
  width: '75vw',
  bgcolor: 'background.paper',
  boxShadow: 24,
  p: 2,
};

const closeButtonStyle = {
  height: 0,
  textAlign: 'right'
};

const Edit = () => {
  const [open, setOpen] = useState(false);
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);

  return (
    <>
      <Modal
        open={open}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
      >
        <Box sx={style}>
          <Box sx={closeButtonStyle}>
            <IconButton onClick={handleClose}>
              <CloseIcon />
            </IconButton>
          </Box>
          <form className='flex flex-col'>
            <h2 className='text-xl'>編集する</h2>
            <select>
              <option value='Monsters'>Monsters</option>
              <option value='Weapons'>Weapons</option>
              <option value='Armors'>Armors</option>
              <option value='Items'>Items</option>
              <option value='Materials'>Materials</option>
            </select>
            <label>
              <input type='number' />
            </label>
            <input type='text' />
            <input type='text' />
            <input type='checkbox' />
            <select>
              <option value='メニュー画面'>メニュー画面</option>
              <option value='戦闘画面'>戦闘画面</option>
              <option value='常時'>常時</option>
              <option value='使用不可'>使用不可</option>
            </select>
            <button type='submit'>作成する</button>
          </form>
        </Box>
      </Modal>
      <div onClick={handleOpen} className='absolute bottom-0 right-0 p-12'>
        <Fab aria-label='add'>
          <AddIcon/>
        </Fab>
      </div>
    </>
  );
};

export default Edit;
