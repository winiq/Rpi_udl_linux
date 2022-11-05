#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x21d43225, "videobuf_to_dma" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeffa220d, "videobuf_mmap_mapper" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfee0983d, "videobuf_queue_cancel" },
	{ 0x563840aa, "videobuf_streamon" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf3e9f263, "videobuf_iolock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf4e681dc, "saa7146_pgtable_free" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0x5f5c7ea, "saa7146_pgtable_alloc" },
	{ 0x1040f533, "videobuf_read_one" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x12677d82, "videobuf_qbuf" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0x595393f8, "v4l2_fh_init" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0x84ecc06e, "saa7146_pgtable_build_single" },
	{ 0xff9153d8, "videobuf_querybuf" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xaf30d09c, "videobuf_read_stream" },
	{ 0xd1e75c0a, "videobuf_dma_unmap" },
	{ 0x1404b68c, "videobuf_queue_sg_init" },
	{ 0xc9c6df3c, "videobuf_stop" },
	{ 0x6587c97e, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4d9774f8, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x6b445a29, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x13e0967c, "videobuf_reqbufs" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x84ea0f4d, "v4l2_fh_add" },
	{ 0xada6f102, "videobuf_dma_free" },
	{ 0x59e6a6c3, "v4l2_fh_del" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0xbd7bc0bc, "videobuf_poll_stream" },
	{ 0x1469b3ad, "v4l2_ctrl_poll" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xd4fc93fc, "v4l2_fh_exit" },
	{ 0x3b4d4589, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-dma-sg,videodev,videobuf-core,saa7146");


MODULE_INFO(srcversion, "86A432B5AB831FDE818BB38");
