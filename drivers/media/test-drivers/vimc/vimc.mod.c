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
	{ 0xb37740c, "vb2_ioctl_reqbufs" },
	{ 0x4d1d285c, "tpg_init" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc6110b6e, "tpg_free" },
	{ 0xf4aef3a4, "tpg_gen_text" },
	{ 0xff75c005, "v4l2_subdev_call_wrappers" },
	{ 0x3005a48, "tpg_alloc" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x7ad2821, "vb2_fop_poll" },
	{ 0x86b4ddf7, "tpg_reset_source" },
	{ 0xf4da1e11, "__v4l2_device_register_subdev_nodes" },
	{ 0xabfa79a3, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc6808be7, "tpg_calc_text_basep" },
	{ 0xa960c6f6, "v4l2_ctrl_subdev_log_status" },
	{ 0x7a5d8c0b, "tpg_update_mv_step" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x756516e7, "tpg_s_fourcc" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0x8cfaf8e7, "vb2_fop_read" },
	{ 0xde88ddc2, "media_pipeline_stop" },
	{ 0x7fb230bb, "vb2_vmalloc_memops" },
	{ 0x2b78d239, "media_pipeline_start" },
	{ 0x3627532, "vb2_fop_mmap" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x90b86462, "vb2_ioctl_qbuf" },
	{ 0x5a84191c, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x2d4daef5, "find_font" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0xaa5503d9, "tpg_set_font" },
	{ 0xc1426e05, "vb2_ioctl_prepare_buf" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x38ac6638, "vb2_ioctl_create_bufs" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xcc5164c6, "vb2_ioctl_dqbuf" },
	{ 0x100c50c4, "v4l2_subdev_link_validate" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0x3e555d03, "platform_device_register" },
	{ 0x31f40b3b, "vb2_fop_release" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x517e7ccd, "tpg_fill_plane_buffer" },
	{ 0xdea33731, "v4l2_device_register_subdev" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xb1d1f5d5, "media_entity_remove_links" },
	{ 0x484c1dbc, "vb2_video_unregister_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x15c6cdf3, "v4l2_event_subdev_unsubscribe" },
	{ 0x5f9af18a, "v4l2_fh_open" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd4f51e32, "v4l2_subdev_init" },
	{ 0xa8d83a3a, "vb2_ioctl_querybuf" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x2bca9add, "media_entity_remote_pad" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4481bf1e, "media_device_init" },
	{ 0xc31d4976, "vb2_ioctl_expbuf" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xad4121a3, "vb2_ioctl_streamoff" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x6520ebc8, "v4l2_device_put" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0xb40fae23, "tpg_g_color_order" },
	{ 0x91369769, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,v4l2-tpg,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "A31E4B4D9B91E2978C9474B");
